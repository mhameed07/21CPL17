/* Program 8 :Implement structures to read, write, compute average marks and the students scoring above and below the average marks for a class of N students.
 */
 
 #include<stdio.h>
 
 int main()
 {
 	struct student
 	{
 		int stu_id;
 		char name[20];
 		float lang_marks;
 		float mat_marks;
 		float comp_marks;
 		float avg;
 	};
 	
 	struct student s[20];
 	int i,n;
 	
 	// Accept the number of records/students
 	printf("Enter the number of records :");
 	scanf("%d",&n);
 	
 	// Accept data for all the fields/members of each record
 	printf("Enter %d student details...\n",n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("\n\nEnter student ID :");	// Student ID
 		scanf("%d",&s[i].stu_id);
 		
 		printf("Enter student name :");		// Studet Name
 		scanf("%s",s[i].name);
 		
 		printf("Enter lang Marks:");		// Language  marks
 		scanf("%f",&s[i].lang_marks);

 		printf("Enter Maths Marks :");		// Maths Marks
 		scanf("%f",&s[i].mat_marks);

 		printf("Enter Computer Marks :");	// Computer Marks
 		scanf("%f",&s[i].comp_marks);
 	}
 	
 	// Compute the average of each student
 	for(i=0;i<n;i++)
 	{
 		
 		s[i].avg=(s[i].lang_marks + s[i].mat_marks + s[i].comp_marks)/3.0;
 	}
 	
 	// Display student ID, name and average of all students 
 	// who have scored above average marks
 	printf("Students scoring above the average marks....\n");
 	printf("\n\nID\tName\tAverage\n\n");
 	
 	for(i=0;i<n;i++)
 	{
 		if(s[i].avg>=35.0)
 		printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
 	}
 	
  	// Display student ID, name and average of all students 
 	// who have scored below average marks
 	
  	printf("\n\nStudents scoring below the average marks....\n");
 	printf("\n\nID\tName\tAverage\n\n");
 	
 	for(i=0;i<n;i++)
 	{
 		if(s[i].avg<35.0)
 		printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
 	}
 	
 	return 0;
 }
