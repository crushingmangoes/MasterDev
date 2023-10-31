package SearchSort.InsertionSort.SortingAttributes;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

class Student
{
    Student(String name, Integer age)
    {
        this.name = name;
        this.age = age;
    }

    private String name; 
    private Integer age;

    public String getName()
    {
        return name;
    }

    public Integer getAge()
    {
        return age;
    }
}

public class StudentSort {
    
    

    

    public static void main(String [] args)
    {
        //Create students
        List<Student> students = new ArrayList<>(List.of(new Student("John", 19), new Student("Jake", 20), new Student("John", 20)));

        Collections.sort(students, (X, Y) -> {return X.getName().compareTo(Y.getName());});
    }
}
