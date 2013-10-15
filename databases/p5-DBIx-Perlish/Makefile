# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: databases/p5-DBIx-Perlish/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DBIx-Perlish
PORTVERSION=	0.60
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GRUBER
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	A perlish interface to SQL databases

BUILD_DEPENDS=	p5-DBI>0:${PORTSDIR}/databases/p5-DBI \
		p5-PadWalker>0:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	DBIx::Perlish.3

NO_STAGE=	yes
.include <bsd.port.mk>
