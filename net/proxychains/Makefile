# Created by:	Patrick MARIE <mycroft@virgaria.org>
# $FreeBSD: net/proxychains/Makefile 306081 2012-10-18 19:13:07Z ak $

PORTNAME=	proxychains
PORTVERSION=	3.1
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/version%20${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Redirect connection through proxy servers

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's!$$(srcdir)/proxychains.conf!$$(srcdir)/proxychains.conf.sample!' \
		-e 's!libproxychains_la_LIBADD = -ldl!libproxychains_la_LIBADD =!' \
		${WRKSRC}/proxychains/Makefile.in
	@${MV} ${WRKSRC}/proxychains/proxychains.conf \
		${WRKSRC}/proxychains/proxychains.conf.sample

post-configure:
	@${ECHO_CMD} '#define PREFIX "${PREFIX}"' >> ${WRKSRC}/config.h

post-install:
	@[ -f ${PREFIX}/etc/proxychains.conf ] || ${CP} ${PREFIX}/etc/proxychains.conf.sample \
		${PREFIX}/etc/proxychains.conf

.include <bsd.port.mk>
