#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int YN;
	cout<<"****************************************************************"<<endl<<endl<<"酷安:WF_Belief 吾爱:辰某"<<endl<<"1.本程序完全免费 如您是购买所得 请立即退款"<<endl<<"2.优化前，请备份好数据，以防出现问题"<<endl<<"3.使用本程序则代表您同意接受可能带来的风险,如:数据丢失、卡米等"<<endl<<endl<<"****************************************************************"<<endl<<endl<<"本程序发布前已经过测试，但不保证您使用过程中不会出现意外情况，如有BUG或意见，欢迎私信作者反馈"<<endl;
	system("adb devices");
	cout<<endl<<"如List of devices attached后无内容,请检查是否给予电脑USB调试权限、更换数据线、更换电脑接口并重新打开程序"<<endl<<"如有内容，请按回车继续";
	getchar();
	cout<<endl<<endl<<"优化内容如下:"<<endl<<"1.对系统毒瘤软件进行冻结"<<endl<<"2.增加系统流畅度 提升系统续航" <<endl<<"3.去除系统广告等，懒得写了"<<endl<<"优化不会影响系统使用"<<endl<<"请做好备份，理论与实践中没有出现任何问题，但是以防万一。";
	cout<<endl<<"输入1 = 开始优化 输入0 = 不优化(注:这是唯一一次询问)"<<endl<<endl<<"请输入:";
	cin>>YN;
	if(YN==1)
	{//禁用的程序都不会影响系统使用 请各位大佬放心 
		cout<<"开始优化 优化过程中如断开连接，重新插入并重新运行程序即可，无须担心，优化完成后会有提示"<<endl<<endl; 
		system("adb shell pm disable-user com.miui.systemAdSolution");//禁用智能服务 
		system("adb shell pm disable-user com.xiaomi.ab"); //禁用小米电商 
		system("adb shell pm disable-user com.miui.bugreport");//禁用用户反馈 
		system("adb shell pm disable-user com.miui.analytics");//禁用系统毒瘤 
		system("adb shell rm -f -r /sdcard/Android/data/com.miui.systemAdSolution/files");//删除开屏广告 
		system("adb shell touch /sdcard/Android/data/com.miui.systemAdSolution/files");//防止开屏广告再生 
		cout<<endl<<"----------------------------"<<endl<<"优化完毕 重启手机后即可生效"<<endl<<"----------------------------"<<endl;
	}
	cout<<"是否禁用系统更新"<<endl<<"输入1 = 禁用 输入0 = 不禁用"<<endl;
	cin>>YN;
	if(YN==1)
	{
		cout<<"原理:防止系统更新包下载，并不能去掉更新提示，提示请手动关闭"<<endl;
		system("adb shell rm -f -r /sdcard/Download/downloaded_rom");//删除系统更新包 
		system("adb shell touch /sdcard/Download/downloaded_rom");//防止系统静默下载更新包 
		system("adb shell rm -f -r /sdcard/downloaded_rom");//同上 
		system("adb shell touch /sdcard/downloaded_rom");//同上 
		cout<<"禁用成功，如有报错提示为正常现象"<<endl;
	}
	cout<<"是否禁用快应用？(禁用后广告会大幅减少)"<<endl<<"输入1 = 禁用 输入0 = 不禁用"<<endl;
	cin>>YN;
	if(YN==1)
	{
		system("adb shell pm disable-user com.miui.hybrid");//快应用服务框架
		cout<<"禁用成功"<<endl;
	}
	cout<<"是否对系统应用进行精简(可能会导致系统异常 会禁用较多程序)"<<endl<<"输入1 = 精简 输入0 = 不精简"<<endl;
	cin>>YN;
	if(YN==1)
	{
		cout<<"精简列表部分采自BV1hi4y1L7FQ 感谢"<<endl<<"如有报错 为MIUI版本不同导致 无需理会 精简将于5s后开始";
		_sleep(5000);
		system("adb shell pm disable-user com.miui.BookmarkProvider");//谷歌浏览器收藏插件，接口已废除
		system("adb shell pm disable-user com.miui.AiAsstVision");//小爱相关，删除不影响小爱
		system("adb shell pm disable-user com.miui.BasicDreams");//屏保，接口已废除
		system("adb shell pm disable-user com.miui.BookmarkProvider");//谷歌浏览器收藏插件，接口已废除
		system("adb shell pm disable-user com.miui.CatcherPatch");
		system("adb shell pm disable-user com.miui.CatchLog");//收集日志 
		system("adb shell pm disable-user com.xiaomi.powerchecker");//耗电检测 
		system("adb shell pm disable-user com.xiaomi.payment");//米币支付 
		system("adb shell pm disable-user com.miui.yellowpage");//生活黄页 
		system("adb shell pm disable-user com.xiaomi.youpin");//小米有品
		system("adb shell pm disable-user com.mfashiongallery.emag");//小米画报
		cout<<"精简完毕"<<endl; 
	}
	cout<<"是否禁用小爱同学(可能增加耗电，自行测试)"<<endl<<"输入1 = 禁用 输入0 = 不禁用"<<endl;
	cin>>YN;
	if(YN==1)
	{
		system("adb shell pm disable-user com.miui.voiceassist");//小爱同学
		system("adb shell pm disable-user com.miui.voicetrigger");//语音唤醒 
		cout<<"禁用完毕";
	}
	cout<<"程序运行完毕，感谢您的使用"<<endl<<"程序将于30s关闭 您也可以手动关闭";
	_sleep(300000);
	return 0; 
}
