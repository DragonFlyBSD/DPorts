PORTNAME=	samhain
PORTVERSION=	4.4.3
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://la-samhna.de/archive/
DISTNAME=	samhain_signed-${PORTVERSION}

MAINTAINER=	freebsd@gregv.net
COMMENT=	Samhain Intrusion Detection System
WWW=		https://la-samhna.de/samhain/

LICENSE=	GPLv2

BROKEN_aarch64=		fails to link: missing sbrk
BROKEN_mips=		fails to configure: error: Could not find the libwrap library
BROKEN_mips64=		fails to configure: error: Could not find the libwrap library
BROKEN_riscv64=		fails to link: missing sbrk

USES=			shebangfix
SHEBANG_FILES=		scripts/samhainadmin-gpg.pl.in \
			scripts/samhainadmin-sig.pl.in

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CONFIGURE_ARGS=	--localstatedir=/var \
		--with-logserver=true \
		--with-altlogserver=true \
		--with-timeserver=true \
		--with-alttimeserver=true

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=		ASM DB_RELOAD DEBUG DNMALLOC DOCS ENCRYPT GNUPG IPV6 \
			LIBWRAP LOGFILE_MONITOR LOGIN_WATCH MAIL \
			MOUNTS_CHECK PORT_CHECK POSIX_ACL PRELUDE PROCESS_CHECK \
			PTRACE SRP STATIC SUIDCHECK UDP USERFILES XML_LOGS
OPTIONS_DEFAULT=	ASM DNMALLOC ENCRYPT LIBWRAP MAIL SRP
OPTIONS_RADIO=		DB
OPTIONS_RADIO_DB=	MYSQL ODBC PGSQL
OPTIONS_SUB=		yes

DB_DESC=	Database support
DB_RELOAD_DESC=	Enable database reload on SIGHUP
DNMALLOC_DESC=	Enable dnmalloc
ENCRYPT_DESC=	Enable client/server encryption
LOGFILE_MONITOR_DESC=	Enable monitor logfiles
LOGIN_WATCH_DESC=	Enable watch for login/logout
MAIL_DESC=	Enable internal SMTP mailer
MOUNTS_CHECK_DESC=	Enable check mount options on filesystems
PORT_CHECK_DESC=	Enable check ports
POSIX_ACL_DESC=	Enable check posix acls
PRELUDE_DESC=	Enable Prelude Framework support
PROCESS_CHECK_DESC=	Enable check processes
PTRACE_DESC=	Enable use anti-debugger options
SRP_DESC=	Enable SRP for authentication
SUIDCHECK_DESC=	Enable check for suid/sgid files
UDP_DESC=	Enable UDP server
USERFILES_DESC=	Enable check for users config files
XML_LOGS_DESC=	Enable XML-formatted logs

ASM_CONFIGURE_ENABLE=		asm

DB_RELOAD_CONFIGURE_ENABLE=	db-reload

DEBUG_CONFIGURE_ENABLE=		debug

DNMALLOC_CONFIGURE_ENABLE=	dnmalloc

ENCRYPT_CONFIGURE_ENABLE=	encrypt

GNUPG_BUILD_DEPENDS=		gpg:security/gnupg
GNUPG_CONFIGURE_WITH=		gpg=${PREFIX}/bin/gpg

IPV6_CONFIGURE_ENABLE=		ipv6

LIBWRAP_CONFIGURE_WITH=		libwrap

LOGFILE_MONITOR_CONFIGURE_ENABLE=	logfile-monitor

LOGIN_WATCH_CONFIGURE_ENABLE=	login-watch

MAIL_CONFIGURE_ENABLE=		mail

MOUNTS_CHECK_CONFIGURE_ENABLE=	mounts-check

MYSQL_IMPLIES=			XML_LOGS
MYSQL_USES=			mysql
MYSQL_CONFIGURE_ON=		--with-database=mysql

ODBC_IMPLIES=			XML_LOGS
ODBC_LIB_DEPENDS=		libodbc.so:databases/unixODBC
ODBC_CONFIGURE_ON=		--with-database=odbc

PGSQL_IMPLIES=			XML_LOGS
PGSQL_USES=			pgsql
PGSQL_CONFIGURE_ON=		--with-database=postgresql

PORT_CHECK_CONFIGURE_ENABLE=	port-check

POSIX_ACL_CONFIGURE_ENABLE=	posix-acl

PRELUDE_LIB_DEPENDS=		libprelude.so:security/libprelude
PRELUDE_CONFIGURE_WITH=		prelude

PROCESS_CHECK_CONFIGURE_ENABLE=	process-check

PTRACE_CONFIGURE_ENABLE=	ptrace

SRP_CONFIGURE_ENABLE=		srp

STATIC_CONFIGURE_ENABLE=	static

SUIDCHECK_CONFIGURE_ENABLE=	suidcheck

UDP_CONFIGURE_ENABLE=		udp

USERFILES_CONFIGURE_ENABLE=	userfiles

XML_LOGS_CONFIGURE_ENABLE=	xml-log

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CFLAGS+=	-fPIC
.endif

.if defined(WITH_RUNAS_USER)
CONFIGURE_ARGS+=	--enable-identity=${WITH_RUNAS_USER}
.else
CONFIGURE_ARGS+=	--enable-identity=yule
.endif

.if defined(WITH_CLIENT)
CONFIGURE_ARGS+=	--enable-network=client \
			--with-data-file=REQ_FROM_SERVER/var/lib/samhain/data.samhain \
			--with-config-file=REQ_FROM_SERVER
PLIST_SUB+=		SAMHAIN="" SETPWD="" YULE="@comment "
EXTRA_PATCHES+=		${FILESDIR}/fixsamhainrc.patch
.elif defined(WITH_SERVER)
USERS=			yule
GROUPS=			yule
CONFIGURE_ARGS+=	--enable-network=server
SUB_LIST+=		WITH_YULE="yes"
PLIST_SUB+=		YULE="" SAMHAIN="@comment " SETPWD="@comment "
EXTRA_PATCHES+=		${FILESDIR}/fixyulerc.patch
.else
SUB_LIST+=		WITH_YULE=""
PLIST_SUB+=		SAMHAIN="" YULE="@comment " SETPWD="@comment "
EXTRA_PATCHES+=		${FILESDIR}/fixsamhainrc.patch
.endif

pre-everything::

.if !defined(WITH_CLIENT) && !defined(WITH_SERVER)
	@${ECHO_MSG}
	@${ECHO_MSG} "Building Samhain in standalone mode."
	@${ECHO_MSG} "If you wish to enable networked mode, please hit CTRL-C"
	@${ECHO_MSG} "now, and build samhain from the samhain-client and"
	@${ECHO_MSG} "samhain-server ports."
	@${ECHO_MSG}
.endif

.if defined(WITH_CLIENT) && defined(WITH_SERVER)
IGNORE=		can't build client and server at once
.endif

post-extract:
	@${TAR} -C ${WRKDIR} -xzf ${WRKSRC}.tar.gz
	@${RM} ${WRKSRC}.tar.gz ${WRKSRC}.tar.gz.asc

post-install:
.if !defined(WITH_SERVER)
	${INSTALL_SCRIPT} ${WRKSRC}/init/samhain.startFreeBSD ${STAGEDIR}${PREFIX}/etc/rc.d/samhain
	@${CP} ${WRKSRC}/samhainrc ${STAGEDIR}${PREFIX}/etc/samhainrc.sample
	@${CHGRP} wheel ${STAGEDIR}${PREFIX}/etc/samhainrc.sample
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/samhain
.else
	${INSTALL_SCRIPT} ${WRKSRC}/init/samhain.startFreeBSD ${STAGEDIR}${PREFIX}/etc/rc.d/yule
	@${CP} ${WRKSRC}/yulerc ${STAGEDIR}${PREFIX}/etc/yulerc.sample
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/yule
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/yulectl
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/yule_setpwd
.endif
.if defined(WITH_CLIENT)
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/samhain_setpwd
.endif

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/MANUAL-2_4.pdf ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/HOWTO-client+server.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/HOWTO-client+server-troubleshooting.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/HOWTO-samhain+GnuPG.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/HOWTO-write-modules.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/FAQ.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/README.UPGRADE ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/README ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/BUGS ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/sh_mounts.txt ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/sh_userfiles.txt ${STAGEDIR}${DOCSDIR}

.include <bsd.port.post.mk>
