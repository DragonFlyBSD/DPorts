# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/devel/p5-File-Find-Rule-VCS/Makefile,v 1.7 2012/11/17 05:56:16 svnexp Exp $

PORTNAME=	File-Find-Rule-VCS
PORTVERSION=	1.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Exclude files and directories for Version Control Systems

BUILD_DEPENDS=	p5-File-Find-Rule>=0.20:${PORTSDIR}/devel/p5-File-Find-Rule \
		p5-Text-Glob>=0.08:${PORTSDIR}/textproc/p5-Text-Glob
RUN_DEPENDS=	p5-File-Find-Rule>=0.20:${PORTSDIR}/devel/p5-File-Find-Rule \
		p5-Text-Glob>=0.08:${PORTSDIR}/textproc/p5-Text-Glob

PERL_CONFIGURE=	yes

MAN3=		File::Find::Rule::VCS.3

.include <bsd.port.mk>
