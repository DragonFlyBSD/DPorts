Ehem

--- bookmarkbridge/main.cpp.orig	2005-09-21 03:21:48.000000000 +0300
+++ bookmarkbridge/main.cpp
@@ -147,7 +147,7 @@ static bool ParseCmdLine(void)
 	extern	char	*optarg;
 	auto	int		optionC;
 
-	while((optionC = getopt(qApp->argc(), qApp->argv(), "b:f:mrt")) != EOF)
+	while((optionC = getopt(qApp->argc(), qApp->argv(), "b:f:mrt")) != -1)
 	{
 		switch(optionC)
 		{
