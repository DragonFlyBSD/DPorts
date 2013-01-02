# New ports collection makefile for:	ruby-opengl
# Date created:		2011-03-14
# Whom:			Steve Wills <steve@meatwad.mouf.net>
#
# $FreeBSD: ports/graphics/rubygem-opengl/Makefile,v 1.3 2012/11/17 05:58:22 svnexp Exp $
#

PORTNAME=	opengl
PORTVERSION=	0.60.1
PORTREVISION=	1
CATEGORIES=	graphics ruby
MASTER_SITES=	RG
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OpenGL/GLU/GLUT interface modules for Ruby

RUN_DEPENDS=	rubygem-mkrf>=0.2.3:${PORTSDIR}/devel/rubygem-mkrf

USE_RUBY=	yes
USE_RAKE=	yes
GEM_NAME=	ruby-${PORTNAME}-${PORTVERSION}
USE_RUBYGEMS=	yes
USE_GL=		glut
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
