# Created by: quest <quest@mac.com>
# $FreeBSD: ports/net/throttled/Makefile,v 1.7 2012/11/17 06:00:23 svnexp Exp $

PORTNAME=	throttled
PORTVERSION=	0.5.2
CATEGORIES=	net
MASTER_SITES=	http://www.intrarts.com/Files/
EXTRACT_SUFX=	.tgz

MAINTAINER=	quest@mac.com
COMMENT=	Bandwidth shaping and QoS solution

LICENSE=	GPLv3

USE_GMAKE=	yes

USE_RC_SUBR=	${PORTNAME}

PLIST_FILES=	sbin/throttled sbin/throttled-startup

post-patch:
	@${REINPLACE_CMD} -e "s|/usr/local|${PREFIX}|g" \
	${WRKSRC}/Makefile
	@${REINPLACE_CMD} -e "s|c++|${CXX}|;s|-O3|${CXXFLAGS}| \
	;s|-pthread|${PTHREAD_LIBS}|" ${WRKSRC}/src/Makefile

.include <bsd.port.mk>
