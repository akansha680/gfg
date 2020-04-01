struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here
    int i,max;
    max=arr[0].feet*12+arr[0].inches;
    for(i=1;i<n;i++)
    {
        if(max<arr[i].feet*12+arr[i].inches)
          max=arr[i].feet*12+arr[i].inches;
    }
    return max;
    
}