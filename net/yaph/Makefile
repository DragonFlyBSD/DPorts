# Created by: Patrick MARIE <mycroft@virgaria.org>
# $FreeBSD: net/yaph/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	yaph
PORTVERSION=	0.91
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}

MAINTAINER=	mycroft@virgaria.org
COMMENT=	Yaph is a proxy scanner

GNU_CONFIGURE=	yes

NO_STAGE=	yes
post-extract:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' \
		${WRKSRC}/yaph/Makefile.in

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/yaph/yaph ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/yaph/yaph.conf ${PREFIX}/etc

.include <bsd.port.mk>
