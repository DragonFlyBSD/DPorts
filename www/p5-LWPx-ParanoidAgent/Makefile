# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: www/p5-LWPx-ParanoidAgent/Makefile 333112 2013-11-07 15:07:21Z vanilla $

PORTNAME=	LWPx-ParanoidAgent
PORTVERSION=	1.09
CATEGORIES=	www security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subclass of LWP::UserAgent that protects you from harm

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
