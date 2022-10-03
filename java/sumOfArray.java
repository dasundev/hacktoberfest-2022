  // sumOfArray
class sumOfArray {
	static int arr[] = { 50, 13, 41, 5 };

	 
	static int sum()
	{
		int sum = 0; // initialize sum
		int i;

		 
		for (i = 0; i < arr.length; i++)
			sum += arr[i];

		return sum;
	}

 
	public static void main(String[] args)
	{
		System.out.println("Sum of array is "
						+ sum());
	}
}
