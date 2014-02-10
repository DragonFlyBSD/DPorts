# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/devel/p5-subversion/Makefile 330360 2013-10-14 20:56:34Z ohauer $

PKGNAMEPREFIX=	p5-

MAINTAINER=	lev@FreeBSD.org
COMMENT=	Perl bindings for Version control system

.if defined(WITH_SUBVERSION_VER) && ${WITH_SUBVERSION_VER} == 16
MASTERDIR=	${.CURDIR}/../../devel/subversion16
.elif defined(WITH_SUBVERSION_VER) && ${WITH_SUBVERSION_VER} == 17
MASTERDIR=	${.CURDIR}/../../devel/subversion17
.else
MASTERDIR=	${.CURDIR}/../../devel/subversion
.endif
PKGDIR=		${.CURDIR}

USES=		perl5

SVN_BUILD_BINDINGS=yes

.include "${MASTERDIR}/Makefile.common"

CATEGORIES+=	perl5

do-build:
	${MAKE} -C ${WRKSRC} swig-pl-lib ${MAKE_ARGS}
	${MAKE} -C ${WRKSRC} swig-pl ${MAKE_ARGS}

pre-install:
	${REINPLACE_CMD} '/SWIG_PL_DIR/s, install$$, all pure_install,g' ${WRKSRC}/Makefile

do-install:
	${MAKE} -C ${WRKSRC} install-swig-pl ${MAKE_ARGS}

.include <bsd.port.post.mk>
