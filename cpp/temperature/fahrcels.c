/* From http://homepages.inf.ed.ac.uk/dts/pm/Papers/nasa-c-style.pdf, page 5. */

#define LOWER 0
#define UPPER 300
#define STEP 20

main() /* Fahrenheit-Celsius table */
{
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf(“%4d %6.1f\n”, fahr, (5.0/9.0)*(fahr - 32));
}
