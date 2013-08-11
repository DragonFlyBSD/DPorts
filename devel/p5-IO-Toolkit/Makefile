# New ports collection makefile for:	p5-IO-Toolkit
# Date created:		2006-07-12
# Whom:			Yuan-Chung Hsiao <ychsiao@ychsiao.org>
#
# $FreeBSD: devel/p5-IO-Toolkit/Makefile 321187 2013-06-18 13:49:02Z az $
#

PORTNAME=	IO-Toolkit
PORTVERSION=	1.008
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LINMAR/${PORTNAME:S/-//}/
PKGNAMEPREFIX=	p5-

MAINTAINER=	ychsiao@ychsiao.org
COMMENT=	IO::Toolkit - Perl extension to create logfiles

BUILD_DEPENDS=	p5-Crypt-RC6>=0:${PORTSDIR}/security/p5-Crypt-RC6
RUN_DEPENDS=	p5-Crypt-RC6>=0:${PORTSDIR}/security/p5-Crypt-RC6

PERL_CONFIGURE=	yes

MAN3=	IO::Toolkit.3

.include <bsd.port.mk>
