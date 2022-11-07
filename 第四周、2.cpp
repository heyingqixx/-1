GPIO_InitTypeDef GPIO_InitStructure;
第一步：使能GPIOA，GPIOE的时钟：
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);

第二步：设置GPIOA,GPIOE参数：输出OR输入，工作模式，端口翻转速率
第三步：调用GPIOA口初始化函数，进行初始化。
第四步：调用GPIO-SetBits函数，进行相应为的置位。

把第二、三、四步合并分别设置GPIOA和GPIOE
先设置GPIOA
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4; // 第四个口，PA4
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //设置为推挽输出
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // IO口速度为50MHz
GPIO_Init(GPIOA,&GPIO-InitST); //根据设定参数初始化GPIOA
GPIO_SetBits(GPIOA,GPIO_Pin_4); //输出高

再设置GPIOE
GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3; // 第三个口，PE3
GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //设置为推挽输出
GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; // IO口速度为50MHz
GPIO_Init(GPIOE,&GPIO-InitST); //根据设定参数初始化GPIOE
GPIO_SetBits(GPIOE,GPIO_Pin_3); //输出高

