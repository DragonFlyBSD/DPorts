# Created by: Zane C. Bowers
# $FreeBSD: dns/ldnsm/Makefile 327719 2013-09-20 16:31:57Z bapt $

PORTNAME=	ldnsm
PORTVERSION=	0.2.1
CATEGORIES=	dns
MASTER_SITES=	http://vvelox.net/src/ldap/
EXTRACT_SUFX=	.tgz

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Manages LDAP enteries for the BIND9 SDB LDAP patch

USES=		perl5

PLIST_FILES=	bin/ldnsm

MAN1=		ldnsm.1

MAN5=		dotldnsm.5

WRKSRC=		${WRKDIR}/${DISTNAME}

#nothing to configure
NO_STAGE=	yes
do-configure:
	@${ECHO} -n

#nothing to build
do-build:
	@${ECHO} -n

do-install:
	@${EXEC} cd ${WRKSRC} ; ${WRKSRC}/install ${PREFIX}

.include <bsd.port.mk>
