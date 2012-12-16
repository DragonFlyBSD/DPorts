# New ports collection makefile for:	p5-File-Slurp-Tree
# Date created:		2006-07-15
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-File-Slurp-Tree/Makefile,v 1.5 2012/11/17 05:56:16 svnexp Exp $
#

PORTNAME=	File-Slurp-Tree
PORTVERSION=	1.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Slurp and emit file trees as nested hashes

BUILD_DEPENDS=	p5-File-Find-Rule>=0:${PORTSDIR}/devel/p5-File-Find-Rule \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		File::Slurp::Tree.3

.include <bsd.port.mk>
