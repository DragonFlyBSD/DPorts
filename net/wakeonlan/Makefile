# Created by: Yen-Ming Lee <leeym@cae.ce.ntu.edu.tw>
# $FreeBSD: net/wakeonlan/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	wakeonlan
PORTVERSION=	0.41
CATEGORIES=	net
MASTER_SITES=	http://gsd.di.uminho.pt/jpo/software/wakeonlan/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sends magic packets to WOL enabled NIC to switch on the called PC

USES=		perl5
USE_PERL5=	configure

MAN1=		wakeonlan.1

NO_STAGE=	yes
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/examples/lab001.wol ${EXAMPLESDIR}

.include <bsd.port.mk>
