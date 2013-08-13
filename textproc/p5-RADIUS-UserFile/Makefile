# New ports collection makefile for:	RADIUS::UserFile
# Date created:				30 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: textproc/p5-RADIUS-UserFile/Makefile 324171 2013-08-02 18:21:05Z az $
#

PORTNAME=		RADIUS-UserFile
PORTVERSION=		1.01
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
PKGNAMEPREFIX=		p5-

MAINTAINER=		ports@FreeBSD.org
COMMENT=	Perl extension for manipulating a RADIUS users file

BUILD_DEPENDS=		p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS:=		${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=			RADIUS::UserFile.3

.include <bsd.port.mk>
