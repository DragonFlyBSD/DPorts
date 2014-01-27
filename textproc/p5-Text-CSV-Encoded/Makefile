# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD: textproc/p5-Text-CSV-Encoded/Makefile 340711 2014-01-22 14:35:55Z mat $

PORTNAME=	Text-CSV-Encoded
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dereckson@gmail.com
COMMENT=	Perl module for Encoding aware CVS files parsing

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple \
		p5-Test-Harness>=0:${PORTSDIR}/devel/p5-Test-Harness \
		p5-Text-CSV>=0:${PORTSDIR}/textproc/p5-Text-CSV
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
