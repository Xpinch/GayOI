#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int lan=1,menu;
void about()
{
	system("cls");
    cout<<"\t\tXpinch���紴�⹤���Ҽ��:"<<endl;
	cout<<"    ������2017��1��11�գ�������:������Ϸ����������ƨ�������������"<<endl;
	cout<<"��Ҫ��Ա:GYX,������ZXC����������������GYX��Ҫְҵ��:������Ƽ����"<<endl;
	cout<<"������������ʱ����������ZXC����������2018��7��25��GYX��ZXC��ʼ��"<<endl;
	cout<<"������Ϸ��"<<endl;
	cout<<"\t\t\t������Ϸ���"<<endl;
	cout<<"    ������2017��9��29�գ�Ϊ���ߵ�һ����Ϸ,�Ӵ˿����������꼶����Ϸ"<<endl;
	cout<<"����С����,������GYX��������������ƨ,��ѧ���Ҷ�����Ϸ,Ҳ�������桤"<<endl;
	cout<<"�ܡ���֮��"<<endl;
	getchar();
	getchar();
	getchar();
	system("cls"); 
}
void load()
{
	cout<<"****************************************************************************************************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"**@*********@********************************************************@******************************"<<endl;
	cout<<"***@*******@*********************************************************@******************************"<<endl;
	cout<<"****@*****@**********************************************************@******************************"<<endl;
	cout<<"*****@***@***********************************************************@******************************"<<endl;
	cout<<"******@*@************************************************************@******************************"<<endl;
	cout<<"*******@*************************************************************@******************************"<<endl;
	cout<<"******@*@*******@@@@@*******@@@@@****@*******************@@@@@*******@***@@@@***********************"<<endl;
	cout<<"*****@***@******@****@********@******@@@@@@@************@************@*@******@*********************"<<endl;
	cout<<"****@*****@*****@*****@*******@******@******@*********@**************@@********@**********��********"<<endl;
	cout<<"***@*******@****@****@********@******@*******@*******@***************@**********@*********Ʒ********"<<endl;
	cout<<"**@*********@***@@@@@*********@******@*******@******@****************@**********@*******************"<<endl;
	cout<<"****************@*************@******@*******@*****@@****************@**********@*******************"<<endl;
	cout<<"****************@*************@******@*******@******@****************@**********@*******************"<<endl;
	cout<<"****************@*************@******@*******@*******@***************@**********@*******************"<<endl;
	cout<<"****************@*************@******@*******@********@**************@**********@*******************"<<endl;
	cout<<"****************@*************@******@*******@**********@************@**********@*******************"<<endl;
	cout<<"***************@@@**********@@@@@****@*******@***********@@@@@******@@@********@@@******************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"***********************Network creative studio******************************************************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"*************************************************G  Y  X********************************************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"****************************************************************************************************"<<endl;
	cout<<"Program is Loading..."<<endl;
	for(int i=1;i<=25;i++)
	{
		cout<<"��";
		Sleep(100);
	}
	Sleep(500);
	for(int i=1;i<=20;i++)
	{
		cout<<"��";
		Sleep(75);
	}
	for(int i=1;i<=5;i++)
	{
		cout<<"��";
		Sleep(50);
	}
	cout<<endl;
	cout<<"Press any key to continue"<<endl;
	system("pause");
	system("cls");
}
int language()
{
    system("cls");
	cout<<"******ѡ������******"<<endl;
	cout<<"******�x���Z��******"<<endl;
	cout<<"Choose your language"<<endl;
	cout<<"1.��������"<<endl;
	cout<<"2.���w����"<<endl; 
	cout<<"3.English"<<endl;
	cout<<"Tips:�����[��pro��֧Ԯ���w����!"<<endl;
	cin>>menu;
	switch(menu)
	{
		case 1:lan=1;break;
		case 2:lan=2;break;
		case 3:lan=3;break;
	}
	 
}
void poop1()
{
	char a;
	system("cls");
	if(lan==1) cout<<"*****������Ϸnoob*****"<<endl;
	else  cout<<"*****POOP EATING GAME noob*****"<<endl;
	if(lan==1) cout<<"�淨:1/Y/yȷ��,2/N/n����"<<endl;
	if(lan==2) cout<<"�淨:1/Y/y�_��,2/N/n���J"<<endl;
	else  cout<<"How to play:1/Y/y is YES,2/N/n is NO"<<endl;
	getchar();getchar();
	system("cls");
	for(int i=3;i>=1;i--)
	{
		if(lan==1) cout<<"����������,�Բ���?"<<endl;
		if(lan==2) cout<<"�@�Y������,�Բ���?"<<endl;
		else  cout<<"Here is a piece of shit.Do you want to eat?"<<endl;
		cout<<"  @  "<<endl;
		cout<<" @@@ "<<endl;
		cout<<"@@@@@"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"�����һ����,���úܺó�"<<endl;
			if(lan==2) cout<<"�����һ����,�X�úܺó�"<<endl;
			else cout<<"You ate a piece of it.It was too tasty!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"��,���������������,���������һ��"<<endl;
			if(lan==2) cout<<"��,��ă��ć�������,��������һ��"<<endl;
			else  cout<<"No,your heart goes on it,so you ate a piece"<<endl; 
		}
		else 
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			if(lan==2) cout<<"�yݔ��ë��"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		cout<<"  #  "<<endl;
		cout<<" @@@ "<<endl;
		cout<<"@@@@@"<<endl; 
		if(lan==1) cout<<"��������,����һ�ڳ�������,��������"<<endl;
		if(lan==2) cout<<"��������,����һ�ڳԃɉK��,�^�m�Ԇ᣿"<<endl;
		else   cout<<"Level up!You can eat two pieces in one time.Do you want to keep on eating?"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"�����һ����,���ø��Ӻó���"<<endl;
			if(lan==2) cout<<"�����һ����,�X�ø��Ӻó���"<<endl;
			else  cout<<"You ate another piece.It tasted better!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"��,��������Ծ���������,�������ֳ���һ��ڣ�"<<endl;
			if(lan==2) cout<<"��,��ă������f��������,������ֳ���һ��ڣ�"<<endl;
			else  cout<<"No,Your heart still goes on it!So you ate a larger Piece!"<<endl; 
		}
		else 
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			if(lan==2) cout<<"�yݔ��ë��"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"@@@@@"<<endl;
		if(lan==1) cout<<"��챻������,�㻹Ҫ��������?"<<endl;
		if(lan==2) cout<<"��챻������,��߀Ҫ�^�m�Ԇ�?"<<endl;
		else cout<<"Shit have already been done.Do you want to eat?"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1)  cout<<"���������,����һ������"<<endl;
			if(lan==2)  cout<<"���������,����һ�����"<<endl;
			else  cout<<"You ate it!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"��������ջ���սʤ���㣬�㻹��һ�ڽ������£�"<<endl;
			if(lan==2) cout<<"��������T�����������㣬��߀��һ�ڌ������£�"<<endl;
			else cout<<"But the tastes of the shit beat you.You ate all of them"<<endl;
		}
		else
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			if(lan==2) cout<<"�yݔ��ë��"<<endl; 
			else cout<<"FUCK"<<endl;
		}
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"#####"<<endl;
		getchar();
		if(lan==1) cout<<"���������,��սʤ��ȫ����"<<endl;
		if(lan==2) cout<<"���������,�������ȫ����"<<endl;
		else  cout<<"You ate all of them.You won!"<<endl;
		getchar();
		if(lan==1) cout<<"����ҽ��������,����Ϊ���˹�����裬�Ѿ�Ⱦ���˾�֢��"<<endl<<"Ҫ��ɱ��";
		if(lan==2) cout<<"�����t�����V��,���������^����裬�ѽ�Ⱦ���˽^֢��"<<endl<<"Ҫ�Ԛ��᣿";
		else  cout<<"But the docter told you.Because of too much shit,you will DIE!"<<endl<<"DO you want to kill yourself?";
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"���������ζ����ȥ"<<endl;
			if(lan==2) cout<<"������Ě�ζ����ȥ"<<endl;
			else cout<<"You kill yourself with the shit"<<endl; 
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"���������������Ч��������"<<endl;
			if(lan==2) cout<<"��������򓌾ȟoЧ��������"<<endl;
			else  cout<<"Tow days after,You die"<<endl;
		}
		else
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			if(lan==2) cout<<"�yݔ��ë��"<<endl; 
			else cout<<"FUCK"<<endl;
		}
		getchar();
		if(lan==1) cout<<"�㻹��"<<i<<"����"<<endl;
		if(lan==2) cout<<"��߀��"<<i<<"�l��"<<endl;
		else cout<<"You left "<<i<<" lives"<<endl;
		getchar();
		system("cls"); 
	}
} 
void poop2()
{
	char a;
	system("cls");
	if(lan==1) cout<<"*****������Ϸpro*****"<<endl;
	else  cout<<"*****Poopeating game pro*****"<<endl;
	if(lan==1) cout<<"�淨:1/Y/yȷ��,2/N/n����"<<endl;
	else  cout<<"How to play:1/Y/y is YES,2/N/n is NO"<<endl;
	getchar();getchar();
	system("cls");
	int i,r;
    r=rand()%2;
	for(i=2;i>=0;i--)
	{
		if (lan==1)  cout<<"���������裬�Բ���?"<<endl; 
		else cout<<"Here is a piece of shit.Do you want to eat?"<<endl;
		cout<<"  @  "<<endl;
	    cout<<" @@@ "<<endl;
	    cout<<"@@@@@"<<endl;
	    cin>>a;
	    if((a=='1')||(a=='Y')||(a=='y'))
	    {
		    r=rand()%3;
		    switch(r)
		    {
		    	case 0:
				  if (lan==1)cout<<"�����һ���裬���úܺó�"<<endl;
				  else  cout<<"You ate a piece of it.It was too tasty!"<<endl;
				  break;
		    	case 1:
				  if(lan==1)  cout<<"����������ζ�����������һ��"<<endl;
				  else cout<<"It looked tasty,so you ate a piece"<<endl; 
				  break;
				case 2:
				  if(lan==1)  cout<<"����ջ�ʹ����־���壬�㲻�����ˣ���*��"<<endl;
				  else cout<<"The smells of the shit controlled you.You ate and fucked it!!"<<endl;
				  break; 
		    }
			cout<<"  #  "<<endl;
	        cout<<" @@@ "<<endl;
	        cout<<"@@@@@"<<endl;
	        a=0;
	    }
	    else if((a=='2')||(a=='N')||(a=='n'))
	    {
	        a=0	;
			if(lan==1)  cout<<"������������������������������һ�ڣ���"<<endl;
		    else  cout<<"No,your heart goes on it,so you ate a piece!!"<<endl;
			cout<<"  #  "<<endl;
	        cout<<" @@@ "<<endl;
			cout<<"@@@@@"<<endl;
	    }
	    else 
	    {
	        if (lan==1) cout<<"�����ë"<<endl; 
	        else cout<<"FUCK"<<endl;
	    }
		getchar();
		if (lan==1)  cout<<"�������ˣ�����һ�ڳ�������!��������"<<endl;
		else cout<<"Level up!You can eat two pieces in one time.Do you want to keep on eating?"<<endl;
	    cin>>a; 
	    if((a=='1')||(a=='Y')||(a=='y'))
	    {
		    r=rand()%3;
			switch(r)
			{
				case 0:
				  if(lan==1)  cout<<"�����һ���裬���ø��Ӻó���"<<endl;
				  else cout<<"You ate another piece.It tasted better!"<<endl;
				  break;
				case 1:
				  if(lan==1)  cout<<"����Ȼ��ֱ�뿪�������ֻ�����"<<endl;
				  else  cout<<"Although you went away,you back to eat"<<endl;
				  break;
				case 2:
				  if(lan==1)  cout<<"�������������ͷ���ֳ���һ��"<<endl;
				  else cout<<"You might want to die,so you ate another piece"<<endl;
				  break; 
			}
			
		    cout<<"  #  "<<endl;
	        cout<<" ### "<<endl;
	        cout<<"@@@@@"<<endl;
	        a=0;
	    }
	    else if((a=='2')||(a=='N')||(a=='n'))
	    {
			if(lan==1)  cout<<"������������Ծ��������������������һ��ڣ���"<<endl;
			else  cout<<"No,Your heart still goes on it!So you ate a larger Piece!"<<endl; 
		    cout<<"  #  "<<endl;
	        cout<<" ### "<<endl;
	        cout<<"@@@@@"<<endl;
		    a=0;	
	    }
	    else 
	    {
	        if(lan==1)  cout<<"�����ë"<<endl; 
	        else  cout<<"FUCK"<<endl;
	    }
	    getchar();
		if(lan==1)  cout<<"��챻�����ˣ��㻹Ҫ��������"<<endl;
		else  cout<<"Shit have already been done.Do you want to eat?"<<endl;
	    cin>>a;
	    if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1)  cout<<"���������,����һ������"<<endl;
			else  cout<<"You ate it!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"��������ջ���սʤ���㣬�㻹��һ�ڽ������£�"<<endl;
			else cout<<"But the tastes of the shit beat you.You ate all of them"<<endl;
		}
		else
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			else cout<<"FUCK"<<endl;
		}
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"#####"<<endl;
		getchar();
		if(lan==1) cout<<"���������,��սʤ��ȫ����"<<endl;
		else  cout<<"You ate all of them.You won!"<<endl;
		getchar();
		if(lan==1) cout<<"����ҽ��������,����Ϊ���˹�����裬�Ѿ�Ⱦ���˾�֢��"<<endl<<"Ҫ��ɱ��";
		else  cout<<"But the docter told you.Because of too much shit,you will DIE!"<<endl<<"DO you want to kill yourself?";
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"���������ζ����ȥ"<<endl;
			else cout<<"You kill yourself with the shit"<<endl; 
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"���������������Ч��������"<<endl;
			else  cout<<"Tow days after,You die"<<endl;
		}
		else
		{
			if(lan==1) cout<<"�����ë��"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		if(lan==1) cout<<"�㻹��"<<i<<"����"<<endl;
		else cout<<"You left "<<i<<" lives"<<endl;
		getchar();
		system("cls"); 
	} 
}
void ppct()
{
	system("cls");
	getchar();
	cout<<"  @  "<<endl;
	cout<<" @@@ "<<endl;
	cout<<"@@@@@"<<endl;
	getchar();
    cout<<"  #  "<<endl;
	cout<<" @@@ "<<endl;
	cout<<"@@@@@"<<endl;
	getchar();
	cout<<"  #  "<<endl;
	cout<<" #@@ "<<endl;
	cout<<"@@@@@"<<endl;
	getchar();
    cout<<"  #  "<<endl;
    cout<<" ##@ "<<endl;
    cout<<"@@@@@"<<endl;
    getchar();
    cout<<"  #  "<<endl;
    cout<<" ### "<<endl;
    cout<<"@@@@@"<<endl;
    getchar();
    cout<<"  #  "<<endl;
    cout<<" ### "<<endl;
    cout<<"#@@@@"<<endl;
    getchar();
    cout<<"  #  "<<endl;
    cout<<" ### "<<endl;
    cout<<"##@@@"<<endl;
    getchar();
    cout<<"  #  "<<endl;
	cout<<" ### "<<endl;
	cout<<"###@@"<<endl;
	getchar(); 
	cout<<"  #  "<<endl;
	cout<<" ### "<<endl;
	cout<<"####@"<<endl;
	getchar();
	cout<<"  #  "<<endl;
	cout<<" ### "<<endl;
	cout<<"#####"<<endl;
	getchar();
	system("cls");
}
int main()
{
	load();
	for(;;)
	{
	    cout<<"\t\t"<<"*****������Ϸ(poop eating game)*****"<<endl;
	    cout<<"\t�汾��:v.3.0.0  ����ʹ��Windows 10ϵͳ"<<endl; 
		cout<<"\t0.�˳�/exit"<<endl;
		cout<<"\t1.������Ϸ/�����[��/Poop(noob)"<<endl;
		cout<<"\t2.������Ϸ/�����[��/Poop(pro)"<<endl;
		cout<<"\t3.���ͼƬ/��ĈDƬ/Pictures of the shit"<<endl;
		cout<<"\t4.ѡ������/�x���Z��/Choose your language"<<endl;
		cout<<"\t5.��������/��������/About us"<<endl;
		if(lan==1) cout<<"\t���������:��������"<<endl;
		if(lan==2) cout<<"\t����Z����:���w����"<<endl;
		if(lan==3) cout<<"\tYour language is English"<<endl;
		cout<<"\t";
		cin>>menu;
		switch(menu)
		{
			case 0:return 0;break;
			case 1:poop1();break;
			case 2:poop2();break;
			case 3:ppct();break;
			case 4:language();break;
			case 5:about();break; 
		}
		system("cls");
    }
}
