#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int lan=1,menu;
void about()
{
	system("cls");
    cout<<"\t\tXpinch网络创意工作室简介:"<<endl;
	cout<<"    创建于2017年1月11日，成名作:吃翔游戏、世世爱放屁、火柴人漫画。"<<endl;
	cout<<"主要成员:GYX,世世，ZXC。世世创作漫画，GYX主要职业有:程序设计兼顾问"<<endl;
	cout<<"创作漫画，有时制作动画。ZXC制作程序。在2018年7月25日GYX与ZXC开始制"<<endl;
	cout<<"作新游戏。"<<endl;
	cout<<"\t\t\t吃翔游戏简介"<<endl;
	cout<<"    创作于2017年9月29日，为作者第一款游戏,从此开启了我们年级的游戏"<<endl;
	cout<<"创作小潮流,紧接着GYX创作了世世爱放屁,哲学大乱斗等游戏,也引出了真·"<<endl;
	cout<<"哲♂理之人"<<endl;
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
	cout<<"****@*****@*****@*****@*******@******@******@*********@**************@@********@**********出********"<<endl;
	cout<<"***@*******@****@****@********@******@*******@*******@***************@**********@*********品********"<<endl;
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
		cout<<"█";
		Sleep(100);
	}
	Sleep(500);
	for(int i=1;i<=20;i++)
	{
		cout<<"█";
		Sleep(75);
	}
	for(int i=1;i<=5;i++)
	{
		cout<<"█";
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
	cout<<"******选择语言******"<<endl;
	cout<<"******選擇語言******"<<endl;
	cout<<"Choose your language"<<endl;
	cout<<"1.简体中文"<<endl;
	cout<<"2.繁體中文"<<endl; 
	cout<<"3.English"<<endl;
	cout<<"Tips:吃翔遊戲pro不支援繁體中文!"<<endl;
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
	if(lan==1) cout<<"*****吃翔游戏noob*****"<<endl;
	else  cout<<"*****POOP EATING GAME noob*****"<<endl;
	if(lan==1) cout<<"玩法:1/Y/y确定,2/N/n否认"<<endl;
	if(lan==2) cout<<"玩法:1/Y/y確定,2/N/n否認"<<endl;
	else  cout<<"How to play:1/Y/y is YES,2/N/n is NO"<<endl;
	getchar();getchar();
	system("cls");
	for(int i=3;i>=1;i--)
	{
		if(lan==1) cout<<"这里有坨翔,吃不吃?"<<endl;
		if(lan==2) cout<<"這裏有坨翔,吃不吃?"<<endl;
		else  cout<<"Here is a piece of shit.Do you want to eat?"<<endl;
		cout<<"  @  "<<endl;
		cout<<" @@@ "<<endl;
		cout<<"@@@@@"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"你吃了一口翔,觉得很好吃"<<endl;
			if(lan==2) cout<<"你吃了一口翔,覺得很好吃"<<endl;
			else cout<<"You ate a piece of it.It was too tasty!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"不,你的内心向往着它,于是你吃了一口"<<endl;
			if(lan==2) cout<<"不,你的內心嚮往著它,於是你吃了一口"<<endl;
			else  cout<<"No,your heart goes on it,so you ate a piece"<<endl; 
		}
		else 
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			if(lan==2) cout<<"亂輸個毛！"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		cout<<"  #  "<<endl;
		cout<<" @@@ "<<endl;
		cout<<"@@@@@"<<endl; 
		if(lan==1) cout<<"你升级了,可以一口吃两块翔,继续吃吗？"<<endl;
		if(lan==2) cout<<"你升級了,可以一口吃兩塊翔,繼續吃嗎？"<<endl;
		else   cout<<"Level up!You can eat two pieces in one time.Do you want to keep on eating?"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"你吃了一口翔,觉得更加好吃了"<<endl;
			if(lan==2) cout<<"你吃了一口翔,覺得更加好吃了"<<endl;
			else  cout<<"You ate another piece.It tasted better!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"不,你的内心仍旧向往着它,于是你又吃了一大口！"<<endl;
			if(lan==2) cout<<"不,你的內心仍舊嚮往著它,於是你又吃了一大口！"<<endl;
			else  cout<<"No,Your heart still goes on it!So you ate a larger Piece!"<<endl; 
		}
		else 
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			if(lan==2) cout<<"亂輸個毛！"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"@@@@@"<<endl;
		if(lan==1) cout<<"翔快被吃完了,你还要继续吃吗?"<<endl;
		if(lan==2) cout<<"翔快被吃完了,你還要繼續吃嗎?"<<endl;
		else cout<<"Shit have already been done.Do you want to eat?"<<endl;
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1)  cout<<"你吃完了翔,打了一个饱嗝"<<endl;
			if(lan==2)  cout<<"你吃完了翔,打了一個飽嗝"<<endl;
			else  cout<<"You ate it!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"但是翔的诱惑力战胜了你，你还是一口将其吞下！"<<endl;
			if(lan==2) cout<<"但是翔的誘惑力戰勝了你，你還是一口將其吞下！"<<endl;
			else cout<<"But the tastes of the shit beat you.You ate all of them"<<endl;
		}
		else
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			if(lan==2) cout<<"亂輸個毛！"<<endl; 
			else cout<<"FUCK"<<endl;
		}
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"#####"<<endl;
		getchar();
		if(lan==1) cout<<"你吃完了翔,你战胜了全世界"<<endl;
		if(lan==2) cout<<"你吃完了翔,你戰勝了全世界"<<endl;
		else  cout<<"You ate all of them.You won!"<<endl;
		getchar();
		if(lan==1) cout<<"但是医生告诉你,你因为吃了过多的翔，已经染上了绝症！"<<endl<<"要自杀吗？";
		if(lan==2) cout<<"但是醫生告訴你,你因為吃了過多的翔，已經染上了絕症！"<<endl<<"要自殺嗎？";
		else  cout<<"But the docter told you.Because of too much shit,you will DIE!"<<endl<<"DO you want to kill yourself?";
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"你在翔的气味中死去"<<endl;
			if(lan==2) cout<<"你在翔的氣味中死去"<<endl;
			else cout<<"You kill yourself with the shit"<<endl; 
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"两天后，你因抢救无效死亡。。"<<endl;
			if(lan==2) cout<<"兩天后，你因搶救無效死亡。。"<<endl;
			else  cout<<"Tow days after,You die"<<endl;
		}
		else
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			if(lan==2) cout<<"亂輸個毛！"<<endl; 
			else cout<<"FUCK"<<endl;
		}
		getchar();
		if(lan==1) cout<<"你还有"<<i<<"条命"<<endl;
		if(lan==2) cout<<"你還有"<<i<<"條命"<<endl;
		else cout<<"You left "<<i<<" lives"<<endl;
		getchar();
		system("cls"); 
	}
} 
void poop2()
{
	char a;
	system("cls");
	if(lan==1) cout<<"*****吃翔游戏pro*****"<<endl;
	else  cout<<"*****Poopeating game pro*****"<<endl;
	if(lan==1) cout<<"玩法:1/Y/y确定,2/N/n否认"<<endl;
	else  cout<<"How to play:1/Y/y is YES,2/N/n is NO"<<endl;
	getchar();getchar();
	system("cls");
	int i,r;
    r=rand()%2;
	for(i=2;i>=0;i--)
	{
		if (lan==1)  cout<<"这里有坨翔，吃不吃?"<<endl; 
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
				  if (lan==1)cout<<"你吃了一口翔，觉得很好吃"<<endl;
				  else  cout<<"You ate a piece of it.It was too tasty!"<<endl;
				  break;
		    	case 1:
				  if(lan==1)  cout<<"看起来很美味，所以你吃了一口"<<endl;
				  else cout<<"It looked tasty,so you ate a piece"<<endl; 
				  break;
				case 2:
				  if(lan==1)  cout<<"翔的诱惑使你神志不清，你不仅吃了，还*了"<<endl;
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
			if(lan==1)  cout<<"不，你的内心向往着它，于是你吃了一口！！"<<endl;
		    else  cout<<"No,your heart goes on it,so you ate a piece!!"<<endl;
			cout<<"  #  "<<endl;
	        cout<<" @@@ "<<endl;
			cout<<"@@@@@"<<endl;
	    }
	    else 
	    {
	        if (lan==1) cout<<"乱输个毛"<<endl; 
	        else cout<<"FUCK"<<endl;
	    }
		getchar();
		if (lan==1)  cout<<"你升级了，可以一口吃两块翔!继续吃吗？"<<endl;
		else cout<<"Level up!You can eat two pieces in one time.Do you want to keep on eating?"<<endl;
	    cin>>a; 
	    if((a=='1')||(a=='Y')||(a=='y'))
	    {
		    r=rand()%3;
			switch(r)
			{
				case 0:
				  if(lan==1)  cout<<"你吃了一口翔，觉得更加好吃了"<<endl;
				  else cout<<"You ate another piece.It tasted better!"<<endl;
				  break;
				case 1:
				  if(lan==1)  cout<<"你虽然径直离开，但你又回来了"<<endl;
				  else  cout<<"Although you went away,you back to eat"<<endl;
				  break;
				case 2:
				  if(lan==1)  cout<<"你放弃了生的念头，又吃了一口"<<endl;
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
			if(lan==1)  cout<<"不，你的内心仍旧向往着它，于是你吃了一大口！！"<<endl;
			else  cout<<"No,Your heart still goes on it!So you ate a larger Piece!"<<endl; 
		    cout<<"  #  "<<endl;
	        cout<<" ### "<<endl;
	        cout<<"@@@@@"<<endl;
		    a=0;	
	    }
	    else 
	    {
	        if(lan==1)  cout<<"乱输个毛"<<endl; 
	        else  cout<<"FUCK"<<endl;
	    }
	    getchar();
		if(lan==1)  cout<<"翔快被吃完了，你还要继续吃吗？"<<endl;
		else  cout<<"Shit have already been done.Do you want to eat?"<<endl;
	    cin>>a;
	    if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1)  cout<<"你吃完了翔,打了一个饱嗝"<<endl;
			else  cout<<"You ate it!"<<endl;
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"但是翔的诱惑力战胜了你，你还是一口将其吞下！"<<endl;
			else cout<<"But the tastes of the shit beat you.You ate all of them"<<endl;
		}
		else
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			else cout<<"FUCK"<<endl;
		}
		cout<<"  #  "<<endl;
		cout<<" ### "<<endl;
		cout<<"#####"<<endl;
		getchar();
		if(lan==1) cout<<"你吃完了翔,你战胜了全世界"<<endl;
		else  cout<<"You ate all of them.You won!"<<endl;
		getchar();
		if(lan==1) cout<<"但是医生告诉你,你因为吃了过多的翔，已经染上了绝症！"<<endl<<"要自杀吗？";
		else  cout<<"But the docter told you.Because of too much shit,you will DIE!"<<endl<<"DO you want to kill yourself?";
		cin>>a;
		if(a=='1'||a=='Y'||a=='y')
		{
			if(lan==1) cout<<"你在翔的气味中死去"<<endl;
			else cout<<"You kill yourself with the shit"<<endl; 
		}
		else if(a=='2'||a=='N'||a=='n')
		{
			if(lan==1) cout<<"两天后，你因抢救无效死亡。。"<<endl;
			else  cout<<"Tow days after,You die"<<endl;
		}
		else
		{
			if(lan==1) cout<<"乱输个毛！"<<endl;
			else cout<<"FUCK"<<endl;
		}
		getchar();
		if(lan==1) cout<<"你还有"<<i<<"条命"<<endl;
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
	    cout<<"\t\t"<<"*****吃翔游戏(poop eating game)*****"<<endl;
	    cout<<"\t版本号:v.3.0.0  建议使用Windows 10系统"<<endl; 
		cout<<"\t0.退出/exit"<<endl;
		cout<<"\t1.吃翔游戏/吃翔遊戲/Poop(noob)"<<endl;
		cout<<"\t2.吃翔游戏/吃翔遊戲/Poop(pro)"<<endl;
		cout<<"\t3.翔的图片/翔的圖片/Pictures of the shit"<<endl;
		cout<<"\t4.选择语言/選擇語言/Choose your language"<<endl;
		cout<<"\t5.关于我们/关于我们/About us"<<endl;
		if(lan==1) cout<<"\t你的语言是:简体中文"<<endl;
		if(lan==2) cout<<"\t你的語言是:繁體中文"<<endl;
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
