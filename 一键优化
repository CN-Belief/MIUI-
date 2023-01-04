#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int YN;
	cout<<"****************************************************************"<<endl<<endl<<"作者B站:墨尘之一  酷安:WF_Belief"<<endl<<"1.本程序完全免费 如您是购买所得 请立即退款"<<endl<<"2.优化前，请备份好数据，以防出现问题"<<endl<<"3.使用本程序则代表您同意接受可能带来的风险,如:数据丢失、卡米等"<<endl<<endl<<"****************************************************************"<<endl<<endl<<"本程序发布前已经过测试，但不保证您使用过程中不会出现意外情况，如有BUG或意见，欢迎在B站或酷安私信作者反馈"<<endl;
	system("adb devices");
	cout<<endl<<"如List of devices attached后无内容,请检查是否给予电脑USB调试权限、更换数据线、更换电脑接口并重新打开程序"<<endl<<"如有内容，请按回车继续";
	getchar();
	cout<<endl<<endl<<"优化内容如下:"<<endl<<"1.对系统毒瘤软件进行冻结"<<endl<<"2.增加系统流畅度 提升系统续航" <<endl<<"3.去除系统广告等，懒得写了"<<endl<<"请做好备份，理论与实践中没有出现任何问题，但是以防万一。";
	cout<<endl<<"输入1 = 开始优化 输入0 = 退出程序(注:这是唯一一次询问)"<<endl<<endl<<"请输入:";
	cin>>YN;
	if(YN==1)
	{//禁用的程序都不会影响系统使用 请各位大佬放心 
		cout<<"开始优化 优化过程中如断开连接，重新插入并重新运行程序即可，无须担心，优化完成后会有提示"<<endl<<endl; 
		system("adb shell pm disable-user com.miui.systemAdSolution");//禁用智能服务 
		system("adb shell pm disable-user com.xiaomi.ab"); //禁用小米电商 
		system("adb shell pm disable-user com.miui.bugreport");//禁用用户反馈 
		system("adb shell pm disable-user com.miui.analytics");//禁用系统毒瘤 
		system("adb shell rm -f -r /sdcard/Android/data/com.miui.systemAdSolution/files");//删除开屏广告 
		cout<<endl<<"----------------------------"<<endl<<"优化完毕 重启手机后即可生效"<<endl<<"----------------------------"<<endl;
		cout<<endl<<"是不是感觉这个优化非常快呢，因为本程序只有短短的28行代码"<<endl<<"我不敢对太多的应用进行操作，因为使用此程序的大部分都是小白，过多的操作可能会影响他们的使用"<<endl<<"但这28行代码足以给您的手机带来很大的提升。"<<endl<<"为什么要做这个程序呢，是因为看到了雪军利用信息差赚小白的钱，这让我感到气愤。"<<endl<<"并且，他制作的优化工具有很多功能会影响手机的日常使用，这是他没有说明的。"<<endl<<"所以，这款只有28行代码的MIUI优化程序诞生了 2023.1.3 作者留" <<endl<<endl<<"程序将于30s自动结束 您也可以手动关闭";
		_sleep(300000);
		return 0; 
	}
	else return 0;
}
