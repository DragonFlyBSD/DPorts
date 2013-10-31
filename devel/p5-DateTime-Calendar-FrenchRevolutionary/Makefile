# Created by: mat
# $FreeBSD: devel/p5-DateTime-Calendar-FrenchRevolutionary/Makefile 331933 2013-10-29 07:56:01Z vanilla $

PORTNAME=	DateTime-Calendar-FrenchRevolutionary
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dates in the French Revolutionary Calendar

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0.14:${PORTSDIR}/devel/p5-DateTime \
		p5-Roman>=1.22:${PORTSDIR}/math/p5-Roman

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
