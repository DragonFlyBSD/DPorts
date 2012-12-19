# New ports collection makefile for:	p5-Data-Dumper-Simple
# Date created:	   			Sep 9 2004
# Whom:		   			clsung
#
# $FreeBSD: ports/devel/p5-Data-Dumper-Simple/Makefile,v 1.11 2012/11/17 05:56:10 svnexp Exp $
#

PORTNAME=	Data-Dumper-Simple
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easily dump variables with names

PERL_MODBUILD=	yes

MAN3=		Data::Dumper::Simple.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500805
BUILD_DEPENDS+=	p5-Filter-Simple>=0:${PORTSDIR}/textproc/p5-Filter-Simple
RUN_DEPENDS+=	${BUILD_DEPENDS}
.endif

.include <bsd.port.post.mk>
