# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-LWP-UserAgent-POE/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	LWP-UserAgent-POE
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	LWP
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Drop-in LWP::UserAgent replacement in POE environments

BUILD_DEPENDS=	p5-POE>=0.9999:${PORTSDIR}/devel/p5-POE \
		p5-POE-Component-Client-HTTP>=0.83:${PORTSDIR}/www/p5-POE-Component-Client-HTTP \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Log-Log4perl>=1:${PORTSDIR}/devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		LWP::UserAgent::POE.3

NO_STAGE=	yes
.include <bsd.port.mk>
