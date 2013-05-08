# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: www/p5-LWPx-ParanoidAgent/Makefile 317501 2013-05-06 10:20:10Z tobez $

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

PERL_CONFIGURE=	yes

MAN3=		LWPx::ParanoidAgent.3

.include <bsd.port.mk>
