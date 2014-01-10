# Created by: Andrea Venturoli <freebsd@netfence.it>
# $FreeBSD: mail/p5-Mail-Field-Received/Makefile 338799 2014-01-05 16:55:04Z az $

PORTNAME=	Mail-Field-Received
PORTVERSION=	0.26
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Perl5 modules for parsing of `Received' headers in e-mails

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Mail-Tools>0:${PORTSDIR}/mail/p5-Mail-Tools
RUN_DEPENDS:=	${BUILD_DEPENDS}

TEST_DEPENDS=	p5-Test-Differences>0:${PORTSDIR}/devel/p5-Test-Differences

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
