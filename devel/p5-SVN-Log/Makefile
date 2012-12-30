# New ports collection makefile for:	p5-SVN-Log
# Date created:		2006-06-26
# Whom:			Yuan-Chung Hsiao <ychsiao@ychsiao.org>
#
# $FreeBSD: ports/devel/p5-SVN-Log/Makefile,v 1.13 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SVN-Log
PORTVERSION=	0.03
PORTREVISION=	5
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	SVN::Log - Extract change logs from a Subversion server

BUILD_DEPENDS=	p5-subversion>=0:${PORTSDIR}/devel/p5-subversion \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	SVN::Log.3

.include <bsd.port.mk>
