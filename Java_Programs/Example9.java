class Example9{
	public static void main(String... arg){
		for(int i=1;i<=4;i++){
			for(int j=1;j<=4-i;j++)
				System.out.print(" ");
			for(int j=i;j>=1;j--)
				System.out.print((char)(j+64));
		System.out.println();
}
}
}