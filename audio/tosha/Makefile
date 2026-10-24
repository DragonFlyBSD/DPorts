PORTNAME=	tosha
PORTVERSION=	0.6
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	LOCAL/markp

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Read CD digital audio and video data via the SCSI bus

LICENSE=	BSD3CLAUSE

dfly-patch:
	${REINPLACE_CMD} -e 's@<cam/@<bus/cam/@g' \
		${WRKSRC}/toscsi.h

.include <bsd.port.mk>
