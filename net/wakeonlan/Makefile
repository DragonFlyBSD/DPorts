# Created by: Yen-Ming Lee <leeym@cae.ce.ntu.edu.tw>
# $FreeBSD: ports/net/wakeonlan/Makefile,v 1.11 2012/11/17 06:00:24 svnexp Exp $

PORTNAME=	wakeonlan
PORTVERSION=	0.41
CATEGORIES=	net
MASTER_SITES=	http://gsd.di.uminho.pt/jpo/software/wakeonlan/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sends magic packets to WOL enabled NIC to switch on the called PC

PERL_CONFIGURE=	yes

MAN1=		wakeonlan.1

post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/examples/lab001.wol ${EXAMPLESDIR}

.include <bsd.port.mk>
