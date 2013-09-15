# Created by: Munish Chopra <mchopra@engmail.uwaterloo.ca>
# $FreeBSD: net-p2p/opendchub/Makefile 326954 2013-09-11 08:15:53Z az $

PORTNAME=	opendchub
PORTVERSION=	0.8.2
CATEGORIES=	net-p2p
MASTER_SITES=	SF/${PORTNAME}/Open%20DC%20Hub/${PORTVERSION}

MAINTAINER=	yashin.dm@gmail.com
COMMENT=	Unofficial Unix version of the Direct Connect Hub software

USES=		perl5
USE_OPENSSL=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

PORTDOCS=	README configfiles general scriptdoc
PLIST_FILES=	bin/${PORTNAME}

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

pre-install:
	@${CHMOD} a+rx ${WRKSRC}/install-sh

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/Documentation/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
