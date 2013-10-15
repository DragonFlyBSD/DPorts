# Created by: Yuan-Chung Hsiao <ychsiao@ychsiao.org>
# $FreeBSD: devel/p5-IO-Toolkit/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

USES=		perl5
USE_PERL5=	configure

MAN3=	IO::Toolkit.3

NO_STAGE=	yes
.include <bsd.port.mk>
