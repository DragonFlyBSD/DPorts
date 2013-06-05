# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: databases/p5-DBIx-Sequence/Makefile 319672 2013-06-02 15:03:18Z miwi $

PORTNAME=	DBIx-Sequence
PORTVERSION=	1.5
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nistor@snickers.org
COMMENT=	DBIx::Sequence - A simple SQL92 ID generator

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

PERL_CONFIGURE=	yes

MAN3=		DBIx::Sequence.3

.include <bsd.port.mk>
