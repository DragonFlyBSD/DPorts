PORTNAME=	metasploit_payloads-mettle
PORTVERSION=	1.0.35
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Compiled binaries for Metasploit's next-gen Meterpreter
WWW=		https://github.com/rapid7/mettle

LICENSE=	BSD3CLAUSE

USES=		gem

NO_ARCH=	yes
STRIP=

.if defined(DEVELOPER)
.MAKEFLAGS+=	DFLY_ALLOW_FOREIGN_BINARIES=yes
DFLY_ALLOW_FOREIGN_BINARIES=yes
NO_ARCH_IGNORE+=	mettle sniffer
.endif

.include <bsd.port.mk>
