# Created by: clsung
# $FreeBSD: devel/p5-Log-Minimal/Makefile 332046 2013-10-30 02:52:46Z vanilla $

PORTNAME=	Log-Minimal
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Minimal but customizable logger

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.98:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
