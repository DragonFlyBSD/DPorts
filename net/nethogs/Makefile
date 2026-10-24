PORTNAME=	nethogs
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8.8
CATEGORIES=	net

MAINTAINER=	anastasios@mageirias.com
COMMENT=	Small net top tool
WWW=		https://github.com/raboof/nethogs

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BROKEN_i386=	non-constant-expression cannot be narrowed from type 'unsigned int' to 'time_t' (aka 'int') in initializer list

USES= compiler:c++11-lang gmake shebangfix ncurses

USE_GITHUB=	yes
GH_ACCOUNT=	raboof

SHEBANG_FILES=	determineVersion.sh
bash_CMD=	/bin/sh

PLIST_FILES=	sbin/nethogs \
		share/man/man8/nethogs.8.gz

MAKE_JOBS_UNSAFE= yes
post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/nethogs

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/doc/Makefile \
		${WRKSRC}/src/MakeLib.mk

.include <bsd.port.mk>
