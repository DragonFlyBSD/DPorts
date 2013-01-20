# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: ports/misc/p5-Locale-SubCountry/Makefile,v 1.27 2013/01/18 10:29:20 svnexp Exp $

PORTNAME=	Locale-SubCountry
PORTVERSION=	1.57
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert state, province, county etc. names to/from code

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

PERL_MODBUILD=	yes

MAN3=	Locale::SubCountry.3 \
	Locale::SubCountry::Data.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501200
TEST_DEPENDS+=	p5-Test-Simple>=0.94:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
