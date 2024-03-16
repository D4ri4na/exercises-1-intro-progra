
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
   if (s1< s2 && s1 <s3)
  {
  cout<<s1;
  }
 else if (s2<s1 && s2<s3)
 {
  cout<<s2;
  }

  else
  {    
     cout<<s3;
  }
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
    double D = B * B - 4 * A * C;
    if (D > 0 && A != 0 ) 
    {
        double d_sqrt = sqrt (D);
        double x1 = (-B + d_sqrt) / (2*A);
        double x2 = (-B - d_sqrt) / (2*A);
        cout<<x1<<" "<<x2<<endl;
    }
    else if (D==0 && A != 0)
    {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);  
    cout<<x1<<endl; 
    }
    else if(A==0 && B!=0)
    {
        cout<< (-1*(C))/B <<endl;
    }
    else if (A!=0 && B==0 )
    {
      cout<< sqrt (C/A) <<endl;
    }
    else 
    {
        cout<<"";
    }
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE

 if (b==0)
  {
 cout<<"Impossible" << endl;
  }
  else
  {
  cout<<a/b<<endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if(n>b)
  {
    cout<<n-1*(n*(y/100))<<endl;
  }
  else if (n>a)
  {
    cout<<n-1*(n*(x/100))<<endl;
  }
  else
  {
    cout<<n<<endl;
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
 if (character>='a' && character<='z')
  {
    cout<<"lower-case alphabet"<<endl;
  }	  
  else if (character>='A' && character<='Z')
  {	  
    cout<<"upper-case alphabet"<<endl;
  }	  
  else
  {	 
   cout<<"not an alphabet"<<endl;  
}    
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number)
  {
    case 1: cout<<"Monday"<<endl;
    break;
    case 2: cout<<"Tuesday"<<endl;
    break;
    case 3: cout<<"Wednesday"<<endl;
    break;
    case 4: cout<<"Thursday"<<endl;
    break;
    case 5: cout<<"Friday"<<endl;
    break;
    case 6: cout<<"Saturday"<<endl;
    break;
    case 7: cout<<"Sunday"<<endl;
    break;
    default: cout<<"Invalid input"<<endl;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r>=0)
  {
    cout<< 4*3.14*r*r<<endl;
  }
  else 
  {
    cout << "Error: Radius cannot be negative."<<endl;
  }
}

void exercise_8(long int seconds) {
  long int hours = seconds/3600;
  long int minutes = (seconds - (hours * 3600))/60;
  long int secondss = seconds - (hours * 3600) -(minutes * 60);
  if (seconds<0)
  {
    cout<<"Error: Input seconds cannot be negative."<<endl;
  }
  else if (hours<10 && minutes<10 && secondss<10) //1
  {
    cout<<"0"<<hours<<":0"<<minutes<<":0"<<secondss<<endl;
  }
   else if (hours<10 && minutes>=10 && secondss<10) //2
  {
    cout<<"0"<<hours<<":"<<minutes<<":0"<<secondss<<endl;
  } 
  else if (hours<10 && minutes<10 && secondss>=10) //3
  {
    cout<<"0"<<hours<<":0"<<minutes<<":"<<secondss<<endl;
  }
  else if (hours<10 && minutes>=10 && secondss>=10) //4
  {                             
    cout<<"0"<<hours<<":"<<minutes<<":"<<secondss<<endl;
  }
  else if (hours>=10 && minutes>=10 && secondss>=10) //5
  {
    cout<<hours<<":"<<minutes<<":"<<secondss<<endl;
  }
  else if (hours>=10 && minutes<10 && secondss<10) //6
  {
    cout<<hours<<":0"<<minutes<<":0"<<secondss<<endl;
  }
  else if (hours>=10 && minutes>=10 && secondss<10) //7
  {
    cout<<hours<<":"<<minutes<<":0"<<secondss<<endl;
  }
  else if (hours>=10 && minutes>10 && secondss<10) //8
  {
    cout<<hours<<":0"<<minutes<<":"<<secondss<<endl;
  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  string result ="";
  result += s1 [0];
  result += s2 [0];
  result += s3 [0];
  result += s4 [0];
  result += s5 [0];
  cout<<s1 [0]<<s2 [0]<<s3 [0]<<s4 [0]<<s5 [0]<<endl;
  if (s1 [0]==s5 [0])
  {
    return"Hemos encontrado algo!";
  }  
  else
  {
    return"Aun sin suerte";
  } 
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
if (a < 0 || b < 0) {
        return 0;
    }

    int sum = a + b;
    int sum_digits = log10(sum) + 1;

    return sum * sum_digits;
  }

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
    cin>> number;
    if (number==11235813)
    {
      return"Se encontro a Fibonacci";
    }
    else
    { 
      return"Esto no es de Fibonacci";
    } 
  }

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
  bool match1 = (color1 == color4 || color4 == "?") && (numb1 == numb4 || numb4 == -1);
     bool match2 = (color2 == color4 || color4 == "?") && (numb2 == numb4 || numb4 == -1);
     bool match3 = (color3 == color4 || color4 == "?") && (numb3 == numb4 || numb4 == -1);

     if (match1)
    {
       cout << "1" << endl;
    } 
     if (match2) 
    {
      cout << "2" << endl;
    } 
     if (match3) 
    {
      cout << "3" << endl;
    } 
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  cin>> age;
  cin >> years_of_experience;
  if (age>=18 && years_of_experience>=5)
  {
    return"Senior project manager";
  } 
  else if (age>=18 && years_of_experience>=3)
  {
    return"Project manager";
  } 
  else if (age>=18)
  {
    return"Project coordinator";
  } 
  else
  {
    return"Not eligible";
  } 
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
   if(number_of_docs>=2)
  {
    return to_string(number_of_docs)+" documentos encontrados";
  }
  else if (number_of_docs==1)
  {
    return"Se encontro un documento";
  }
  else
  {
    return"No se encontraron documentos";
  }
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout<<"Los valores son: a = "<<a<<" b = "<<b<<" y c = "<<c<<endl;
  cout<<"Permutamos: a => b, b => c, c => a"<<endl;
  cout<<"Los valores despues de la permutacion son: a = "<<c<<" b = "<<a<<" c = "<<b<<endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE

    
    if (debut >  0 || debut >  24 || fin >  0 || fin  > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return ;
    }
    
    else if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return ;
    }
    
    else if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }
    
    int horasTarifa1 = 0, horasTarifa2 = 0;
    int costoTotal = 0;
    
    for (int i = debut; i < fin; ++i) {
        if ((i >= 0 && i < 7) || (i >= 17 && i < 24)) {
            horasTarifa1++;
        } else {
            horasTarifa2++;
        }
    }
    
    costoTotal = horasTarifa1 + 2 * horasTarifa2;
    
    cout << "Has alquilado una bicicleta por" << endl;
    cout << horasTarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    cout << horasTarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    cout << "El monto total a pagar es de " << costoTotal << " boliviano(s)." << endl;
    
    return ;

}

