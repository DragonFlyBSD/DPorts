# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: net/p5-Net-ARP/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-ARP
PORTVERSION=	1.0.6
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Perl extension for creating ARP packets

BUILD_DEPENDS=	p5-Net-Pcap>=0:${PORTSDIR}/net/p5-Net-Pcap

USES=		perl5
USE_PERL5=	configure

WRKSRC=		${WRKDIR}/${PORTNAME}

MAN3=	Net::ARP.3

NO_STAGE=	yes
.include <bsd.port.mk>
