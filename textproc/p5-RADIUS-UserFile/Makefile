# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-RADIUS-UserFile/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	RADIUS-UserFile
PORTVERSION=	1.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for manipulating a RADIUS users file

BUILD_DEPENDS=	p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
