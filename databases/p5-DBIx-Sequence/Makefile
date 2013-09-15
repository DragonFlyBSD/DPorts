# Created by: Jon Nistor <nistor@snickers.org>
# $FreeBSD: databases/p5-DBIx-Sequence/Makefile 326904 2013-09-10 14:35:48Z az $

PORTNAME=	DBIx-Sequence
PORTVERSION=	1.5
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	nistor@snickers.org
COMMENT=	DBIx::Sequence - A simple SQL92 ID generator

BUILD_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS=	p5-DBI>=0:${PORTSDIR}/databases/p5-DBI

USES=		perl5
USE_PERL5=	configure

MAN3=		DBIx::Sequence.3

.include <bsd.port.mk>
