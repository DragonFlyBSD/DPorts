# Created by: mat
# $FreeBSD: ports/devel/p5-DateTime-Calendar-FrenchRevolutionary/Makefile,v 1.14 2012/11/18 07:24:42 svnexp Exp $

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

PERL_MODBUILD=	yes

MAN3=		DateTime::Calendar::FrenchRevolutionary.3 \
		DateTime::Calendar::FrenchRevolutionary::Locale::en.3

.include <bsd.port.mk>
