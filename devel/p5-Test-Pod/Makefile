# New ports collection makefile for:	p5-Test-Pod
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-Test-Pod/Makefile,v 1.28 2012/11/17 05:56:33 svnexp Exp $
#

PORTNAME=	Test-Pod
PORTVERSION=	1.45
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DWHEELER
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Check for POD errors in files

PERL_MODBUILD=	yes

MAN3=		Test::Pod.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500905
RUN_DEPENDS+=	p5-Pod-Simple>=3.05:${PORTSDIR}/textproc/p5-Pod-Simple
.endif

.include <bsd.port.post.mk>
