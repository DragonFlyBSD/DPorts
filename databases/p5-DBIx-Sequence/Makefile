# New ports collection makefile for:	p5-DBIx-Sequence
# Date created:				6 Jan 2006
# Whom:					Jon Nistor <nistor@snickers.org>
#
# $FreeBSD: ports/databases/p5-DBIx-Sequence/Makefile,v 1.4 2012/11/17 05:55:15 svnexp Exp $
#

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
