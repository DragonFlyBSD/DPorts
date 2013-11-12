# $FreeBSD: sysutils/panicmail/Makefile 332673 2013-11-04 08:57:06Z cperciva $

PORTNAME=	panicmail
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.daemonology.net/panicmail/

MAINTAINER=	cperciva@FreeBSD.org
COMMENT=	Automatically report kernel panics

LICENSE=	BSD

RUN_DEPENDS=	pkesh:${PORTSDIR}/security/pkesh

NO_BUILD=	yes
NO_INSTALL=	yes

PLIST_FILES=	etc/rc.d/panicmail \
		etc/cperciva-panicmail.pem

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/panicmail ${STAGEDIR}${PREFIX}/etc/rc.d/
	${INSTALL_DATA} ${WRKSRC}/cperciva-panicmail.pem ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
