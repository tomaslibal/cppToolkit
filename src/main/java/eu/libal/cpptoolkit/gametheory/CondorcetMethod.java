package eu.libal.cpptoolkit.gametheory;

import java.util.*;

public class CondorcetMethod {

    private List<List<String>> rankings = new ArrayList<>();
    private final List<String> validOptions;

    public CondorcetMethod(List<String> validOptions) {
        this.validOptions = validOptions;
    }

    public String pickWinner() {
        int[][] votingMat = votingMatrix();

        Map<String, Integer> optionDominates = new HashMap<>();

        validOptions.stream().forEach(option -> {
            int row = validOptions.indexOf(option);
            optionDominates.put(option, 0);

            for (int column = 0; column < validOptions.size(); column++) {
                if (row != column) {
                    int lead = votingMat[row][column];
                    int foll = votingMat[column][row];

                    if (lead > foll) {
                        int inc = optionDominates.get(option) + 1;
                        optionDominates.put(option, inc);
                    }
                }
            }
        });

        // this finds the element that dominated the most other elements
        // in case there is a tie, this picks one element of the tied elements
        Optional<Map.Entry<String, Integer>> first = optionDominates.entrySet().stream().sorted(Map.Entry.comparingByValue(Collections.reverseOrder())).findFirst();

        if (first.isPresent()) {
            return first.get().getKey();
        } else {
            return null;
        }
    }

    public void addRanking(List<String> ranking) throws Exception {
        if (!validateOptions(ranking)) {
            throw new Exception("unknown option used, valid options are " + validOptions);
        }

        rankings.add(ranking);
    }

    private boolean validateOptions(List<String> ranking) {
        return ranking.stream().allMatch(option -> validOptions.contains(option));
    }

    public int[][] votingMatrix() {
        int len = validOptions.size();

        int[][] mat = new int[len][len];

        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                // i rows, j columns
                if (i != j) {
                    String lead = validOptions.get(i);
                    String foll = validOptions.get(j);

                    int count = (int) rankings.stream().filter(rank -> {
                        int idxLead = rank.indexOf(lead);
                        int idxFoll = rank.indexOf(foll);

                        if (idxLead == -1) idxLead = Integer.MAX_VALUE;
                        if (idxFoll == -1) idxFoll = Integer.MAX_VALUE;

                        return idxLead < idxFoll;
                    }).count();

                    mat[i][j] = count;
                }
            }
        }

        return mat;
    }
}
