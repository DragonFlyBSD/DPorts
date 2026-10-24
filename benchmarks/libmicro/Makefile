PORTNAME=	libmicro
PORTVERSION=	0.4.1
CATEGORIES=	benchmarks
MASTER_SITES=	LOCAL/bdrewery/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Set of utilities to benchmark productivity of system calls

LICENSE=	CDDL

BROKEN_riscv64=		Fails to build: bin-riscv64: no such file or directory

USES=		gmake
WRKSRC=		${WRKDIR}/libMicro-${PORTVERSION}
STRIP=		# Do not strip binaries
PLIST_SUB=	ARCH="${LIBMICRO_ARCH}"
PKGLIBDIR=	${PREFIX}/lib/${PORTNAME}

LIBMICRO_ARCH=	${ARCH:S/aarch64/arm64/:C/armv.*/arm/:C/powerpc64.*/powerpc/}

post-build:
	${ECHO_CMD} '#!/bin/sh' > ${WRKDIR}/libmicro-bench
	${ECHO_CMD} '(cd ${PKGLIBDIR} && ./bench $$1)' \
		>> ${WRKDIR}/libmicro-bench.sh

do-install:
	(cd ${WRKDIR} && ${INSTALL_SCRIPT} libmicro-bench.sh \
		${STAGEDIR}${PREFIX}/bin/libmicro-bench)
	(cd ${WRKSRC} && ${INSTALL_SCRIPT} multiview.sh \
		${STAGEDIR}${PREFIX}/bin/multiview)
	@${MKDIR} ${STAGEDIR}${PKGLIBDIR}
	(cd ${WRKSRC} && ${INSTALL_SCRIPT} bench.sh \
		${STAGEDIR}${PKGLIBDIR}/bench)
	@${MKDIR} ${STAGEDIR}${PKGLIBDIR}/bin-${LIBMICRO_ARCH}
	(cd ${WRKSRC}/bin-${LIBMICRO_ARCH} \
		&& ${INSTALL_PROGRAM} exec_bin ${STAGEDIR}${PKGLIBDIR}/bin-${LIBMICRO_ARCH})
	(cd ${WRKSRC}/bin ; for i in * ; do ${INSTALL_PROGRAM} \
		${WRKSRC}/bin-${LIBMICRO_ARCH}/$$i ${STAGEDIR}${PKGLIBDIR}/bin-${LIBMICRO_ARCH} ; done)
	@${MKDIR} ${STAGEDIR}${PKGLIBDIR}/bin
	(cd ${STAGEDIR}${PKGLIBDIR}/bin-${LIBMICRO_ARCH} ; for i in * ; do ${LN} -s \
		../bin-${LIBMICRO_ARCH}/$$i ../bin ; done)

dfly-patch:
	${LN} -sv ${WRKSRC}/Makefile.FreeBSD ${WRKSRC}/Makefile.DragonFly
	${REINPLACE_CMD} -e 's@\(\[ F"\`uname -s\`" = F"FreeBSD" \]\)@\1 \|\| \[ F"\`uname -s\`" = F"DragonFly" \]@g'	\
			 -e '/c_lockf_10/s@cascade_lockf@#cascade_lockf@g'	\
			 -e '/c_lockf_200/s@cascade_lockf@#cascade_lockf@g'	\
			 -e '/c_flock_10/s@cascade_flock@#cascade_flock@g'	\
			 -e '/c_flock_200/s@cascade_flock@#cascade_flock@g'	\
			 -e '/c_fcntl_10/s@cascade_fcntl@#cascade_fcntl@g'	\
			 -e '/c_fcntl_200/s@cascade_fcntl@#cascade_fcntl@g'	\
			 -e '/fork_10/s@fork@#fork@g'				\
			 -e '/exit_10/s@exit@#exit@g'				\
			 -e '/close_tcp/s@close_tcp@#close_tcp@g'		\
		${WRKSRC}/bench.sh
	${REINPLACE_CMD} -e 's@jmp_buf@sigjmp_buf@g'			\
		${WRKSRC}/siglongjmp.c

.include <bsd.port.mk>
