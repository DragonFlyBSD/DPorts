# Created by: Bob Bomar <bob@bomar.us>
# $FreeBSD: net-im/pork/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=		pork
PORTVERSION=		0.99.8.1
CATEGORIES=		net-im
MASTER_SITES=		SF/ojnk/${PORTNAME}/${PORTVERSION}

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Console-based AIM client

USES=			perl5
USE_OPENSSL=		yes

GNU_CONFIGURE=		yes
MAKE_JOBS_SAFE=		yes

post-patch:
	@${REINPLACE_CMD} -e 's/^inline //' ${WRKSRC}/src/*.h

.include <bsd.port.mk>
