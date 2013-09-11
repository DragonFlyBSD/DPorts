# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-File-Slurp-Tree/Makefile 326728 2013-09-08 13:59:48Z az $

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

USES=		perl5
USE_PERL5=	configure

MAN3=		File::Slurp::Tree.3

.include <bsd.port.mk>
