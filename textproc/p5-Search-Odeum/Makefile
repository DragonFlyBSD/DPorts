# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-Search-Odeum/Makefile 326941 2013-09-11 06:03:56Z az $

PORTNAME=	Search-Odeum
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Search
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Perl interface to the Odeum inverted index API

LIB_DEPENDS=	qdbm:${PORTSDIR}/databases/qdbm

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ENV=	CFLAGS="${CFLAGS}"
USES=		perl5
USE_PERL5=	configure

MAN3=		Search::Odeum.3 \
		Search::Odeum::Document.3 \
		Search::Odeum::Result.3

.include <bsd.port.mk>
