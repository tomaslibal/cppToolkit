package eu.libal.cpptoolkit.gametheory;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.junit.rules.ExpectedException;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import static org.junit.Assert.*;

public class CondorcetMethodTest {

    private CondorcetMethod condorcet;
    private List<String> DefaultVotingOptions;

    @Before
    public void setup() {
        DefaultVotingOptions = new ArrayList<>();
        DefaultVotingOptions.add("A");
        DefaultVotingOptions.add("B");
        DefaultVotingOptions.add("C");

        condorcet = new CondorcetMethod(DefaultVotingOptions);
    }

    @Test
    public void shouldNotThrowAnExceptionIfUsingOnlyValidOptions() throws Exception {
        condorcet.addRanking(Arrays.asList("A", "B", "C"));
    }

    @Test(expected = Exception.class)
    public void shouldThrownAnExceptionIfUsingInvalidOption() throws Exception {
        condorcet.addRanking(Arrays.asList("D"));
    }

    @Test
    public void shouldProduceExpectedVotingMatrix() throws Exception {
        condorcet.addRanking(Arrays.asList("A", "C", "B"));
        condorcet.addRanking(Arrays.asList("B"));
        condorcet.addRanking(Arrays.asList("A", "C"));
        condorcet.addRanking(Arrays.asList("B", "A", "C"));
        condorcet.addRanking(Arrays.asList("C", "A", "B"));

        int[][] mat = condorcet.votingMatrix();

        Assert.assertEquals(3, mat[0][1]);
        Assert.assertEquals(3, mat[0][2]);
        Assert.assertEquals(2, mat[1][0]);
        Assert.assertEquals(2, mat[1][2]);
        Assert.assertEquals(1, mat[2][0]);
        Assert.assertEquals(3, mat[2][1]);
    }

    @Test
    public void shouldPickWinnerAsTheElementDominatingTheMostColumns() throws Exception {
        condorcet.addRanking(Arrays.asList("A", "C", "B"));
        condorcet.addRanking(Arrays.asList("B"));
        condorcet.addRanking(Arrays.asList("A", "C"));
        condorcet.addRanking(Arrays.asList("B", "A", "C"));
        condorcet.addRanking(Arrays.asList("C", "A", "B"));

        Assert.assertEquals("A", condorcet.pickWinner());
    }

    // todo: should this throw an error if there is a tie?
}